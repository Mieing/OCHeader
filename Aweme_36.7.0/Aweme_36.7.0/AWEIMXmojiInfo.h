@class NSNumber, AWEIMXmojiIconInfo, NSArray;

@interface AWEIMXmojiInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSNumber *version;
@property (retain, nonatomic) AWEIMXmojiIconInfo *iconInfo;
@property (copy, nonatomic) NSArray *stickerInfos;
@property (copy, nonatomic) NSArray *placeHolderStickerInfos;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
