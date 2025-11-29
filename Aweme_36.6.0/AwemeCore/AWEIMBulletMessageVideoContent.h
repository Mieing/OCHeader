@class NSString, NSDictionary, AWEURLModel;

@interface AWEIMBulletMessageVideoContent : NSObject <NSCopying>

@property (copy, nonatomic) NSString *authorNickname;
@property (copy, nonatomic) NSString *authorUID;
@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSDictionary *rawDict;
@property (nonatomic) long long shareWithTimestamp;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
