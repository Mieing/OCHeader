@class NSString, ACCDraftURS;

@interface _AWECustomPropUploadInfo : NSObject

@property (copy, nonatomic) NSString *packagePath;
@property (copy, nonatomic) NSString *iconPath;
@property (copy, nonatomic) NSString *coverPath;
@property (copy, nonatomic) NSString *templateEffectId;
@property (copy, nonatomic) NSString *customEffectId;
@property (retain, nonatomic) ACCDraftURS *packageURS;
@property (retain, nonatomic) ACCDraftURS *iconURS;
@property (copy, nonatomic) NSString *exportTaskId;
@property (nonatomic) BOOL isVideo;

- (void).cxx_destruct;

@end
