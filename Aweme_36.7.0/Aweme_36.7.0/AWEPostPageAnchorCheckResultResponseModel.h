@class NSString, AWECodeGenComponentUnavailableNoticeModel;

@interface AWEPostPageAnchorCheckResultResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reasonDetailUrl;
@property (retain, nonatomic) AWECodeGenComponentUnavailableNoticeModel *notice;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
