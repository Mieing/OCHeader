@class NSString, MMFinderLiveNewCustomGiftItemResourceURL;

@interface MMFinderLiveNewCustomGiftResource : NSObject <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *thumbnail;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *preview;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *animation;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *landscapeAnimation;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *signPreview;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *signThumbnail;

+ (id)transferFromResourcePB:(id)a0 business:(id)a1;
+ (BOOL)isResourcePBValid:(id)a0 business:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
