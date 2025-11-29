@class NSString, MMImage, CEmoticonWrap;

@interface WCInputTextCacheItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) MMImage *image;
@property (retain, nonatomic) CEmoticonWrap *emoji;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
