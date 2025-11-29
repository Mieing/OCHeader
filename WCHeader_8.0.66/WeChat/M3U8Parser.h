@class M3U8SegmentInfo, NSMutableDictionary, NSMutableString, NSMutableArray;

@interface M3U8Parser : NSObject

@property (retain, nonatomic) NSMutableString *proxyM3U8Content;
@property (retain, nonatomic) NSMutableArray *arrSegment;
@property (retain, nonatomic) NSMutableDictionary *dicSegment;
@property (readonly, nonatomic) long long mediaSequence;
@property (readonly, nonatomic) double targetDuration;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) M3U8SegmentInfo *lastSegmentInfo;

- (id)initWithContent:(id)a0;
- (void)appendNewLine:(id)a0;
- (void)parseContent:(id)a0;
- (id)parseExtXKeyParams:(id)a0;
- (id)getSegmentInfoWithFileName:(id)a0;
- (unsigned long long)getSegmentCount;
- (id)getProxyM3U8Content;
- (void).cxx_destruct;

@end
