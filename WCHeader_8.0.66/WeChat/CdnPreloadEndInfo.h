@class CdnProgressInfo;

@interface CdnPreloadEndInfo : NSObject

@property (nonatomic) int retCode;
@property (retain, nonatomic) CdnProgressInfo *progressInfo;

- (id)initWithRetCode:(int)a0 progressInfo:(id)a1;
- (void).cxx_destruct;

@end
