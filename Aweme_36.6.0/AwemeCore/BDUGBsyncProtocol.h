@class BDUGBsyncHeader, NSMutableArray;

@interface BDUGBsyncProtocol : GPBMessage

@property (retain, nonatomic) BDUGBsyncHeader *header;
@property (nonatomic) BOOL hasHeader;
@property (retain, nonatomic) NSMutableArray *topicsArray;
@property (readonly, nonatomic) unsigned long long topicsArray_Count;

+ (id)descriptor;

- (id)topicsArray;
- (id)header;
- (void)setTopicsArray:(id)a0;
- (void)setHeader:(id)a0;

@end
