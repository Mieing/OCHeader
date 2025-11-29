@class NSString, NSNumber;

@interface StickerInfo : NSObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *len;
@property (retain, nonatomic) NSNumber *active;
@property (nonatomic) BOOL isProcessed;

- (id)initWithParam:(id)a0;
- (id)getDic;
- (BOOL)isActiveValid;
- (void).cxx_destruct;

@end
