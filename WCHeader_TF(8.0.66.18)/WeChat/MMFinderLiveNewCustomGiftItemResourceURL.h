@class NSString;

@interface MMFinderLiveNewCustomGiftItemResourceURL : NSObject <NSCopying>

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;

+ (id)transferFromResourceUrlPB:(id)a0 business:(id)a1;
+ (BOOL)isResourceURLPBValid:(id)a0 business:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
