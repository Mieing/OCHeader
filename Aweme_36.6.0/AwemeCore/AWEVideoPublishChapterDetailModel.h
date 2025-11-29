@class NSString, NSMutableArray;

@interface AWEVideoPublishChapterDetailModel : NSObject

@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL isAd;
@property (retain, nonatomic) NSMutableArray *knowledges;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
