@class MMLocatingCoordinateLogic, NSString, TextStatePublishParameter, MMTextStateMediaItem, TextStateModel, MMTextStateVideoItem, WCCgiBlockHelper;
@protocol TextStatePublishTaskDeletate;

@interface TextStatePublishTask : NSObject <PBCoding, IMMTextStateMediaMgrExt>

@property (weak, nonatomic) id<TextStatePublishTaskDeletate> delegate;
@property (retain, nonatomic) TextStateModel *textState;
@property (retain, nonatomic) TextStatePublishParameter *parameter;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) MMTextStateMediaItem *associateImageItem;
@property (retain, nonatomic) MMTextStateVideoItem *associateVideoItem;
@property (retain, nonatomic) NSString *mediaId;
@property (nonatomic) BOOL hasFetchedLocation;
@property (retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper;
@property (retain, nonatomic) MMLocatingCoordinateLogic *locationLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_textState;
+ (void)PBArrayAdd_taskId;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_errorMessage;
+ (void)PBArrayAdd_parameter;
+ (void)initialize;
+ (id)generateClientMessageId;
+ (void)setFirstTextStateExpireTime:(unsigned int)a0;

- (id)getPBPropertyTable;
- (id)initWithTextState:(id)a0 associateMediaItem:(id)a1 parameter:(id)a2;
- (void)prepare;
- (BOOL)startTask;
- (void)privateStartTask;
- (id)reportObject;
- (BOOL)isEqualToTask:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)needRequestLocation;
- (void)requestLocation;
- (BOOL)needUploadMedia;
- (void)uploadMedia;
- (void)onTextStateMediaUploadSuccess:(id)a0;
- (void)onTextStateMediaUploadFail:(id)a0;
- (void)requestPublishing;
- (void).cxx_destruct;

@end
