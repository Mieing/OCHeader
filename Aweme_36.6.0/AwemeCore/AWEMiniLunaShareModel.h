@class NSString, NSDictionary, AWEAwemeModel, AWEOpenPlatformIMShareModel, AWEURLModel;

@interface AWEMiniLunaShareModel : NSObject

@property (nonatomic) unsigned long long shareType;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *authorId;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *clipId;
@property (copy, nonatomic) NSString *shortShareLink;
@property (copy, nonatomic) NSString *commonShareDesc;
@property (copy, nonatomic) NSString *feebBackSchema;
@property (copy, nonatomic) NSString *musicReportSchema;
@property (copy, nonatomic) NSString *videoReportSchema;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ channelClickBlock;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEOpenPlatformIMShareModel *openPlatformIMShareModel;

- (void).cxx_destruct;

@end
