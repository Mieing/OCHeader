@class NSString, NSNumber, NSArray;

@interface AWEIMXmojiStickerInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *xmojiID;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *animateURI;
@property (copy, nonatomic) NSArray *animateUrlList;
@property (copy, nonatomic) NSString *animateType;
@property (copy, nonatomic) NSNumber *stickerType;

- (id)initWithXmojiID:(id)a0 width:(id)a1 height:(id)a2 animateURI:(id)a3 animateUrlList:(id)a4 animateType:(id)a5 stickerType:(id)a6;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
