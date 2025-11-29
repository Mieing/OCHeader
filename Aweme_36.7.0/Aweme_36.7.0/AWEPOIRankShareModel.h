@class NSString, AWEURLModel;

@interface AWEPOIRankShareModel : NSObject

@property (copy, nonatomic) NSString *rankID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *updateTime;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *rankCode;
@property (nonatomic) BOOL canSwitch;
@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *shareUrl;

- (void).cxx_destruct;

@end
