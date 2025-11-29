@class BDPNovelBaseDetail, NSString, BDPNovelContentMeta;

@interface BDPNovelContentDetail : NSObject

@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) BDPNovelBaseDetail *contentDetail;
@property (nonatomic) double endingTopOffset;
@property (nonatomic) double endingBottomOffset;
@property (copy, nonatomic) NSString *endingText;
@property (weak, nonatomic) BDPNovelContentMeta *contentMeta;

- (void).cxx_destruct;

@end
