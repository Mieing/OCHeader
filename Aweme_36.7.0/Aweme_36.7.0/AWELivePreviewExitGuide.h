@class NSString, NSMutableArray, AWEURLModel;

@interface AWELivePreviewExitGuide : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *mainText;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) int type;
@property (nonatomic) long long latestLiveRecord;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL lessFreq;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (copy, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)parseExitListFromOriginRoomModel:(id)a0;
+ (id)userListArrayJSONTransformer;

- (void).cxx_destruct;

@end
