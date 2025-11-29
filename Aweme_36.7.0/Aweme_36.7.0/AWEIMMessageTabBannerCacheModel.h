@class NSString, NSObject;

@interface AWEIMMessageTabBannerCacheModel : NSObject <NSCoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject *model;
@property (retain, nonatomic) NSString *modelClassName;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
