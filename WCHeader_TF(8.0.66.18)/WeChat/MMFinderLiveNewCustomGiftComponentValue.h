@class NSString, MMFinderLiveNewCustomGiftItemResourceURL;

@interface MMFinderLiveNewCustomGiftComponentValue : NSObject <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double price;
@property (nonatomic) BOOL customTextDisabled;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *thumbnail;
@property (nonatomic) BOOL usePag;

+ (id)transferFromComponentValuePB:(id)a0 business:(id)a1;
+ (BOOL)isComponentValuePBValid:(id)a0 business:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
