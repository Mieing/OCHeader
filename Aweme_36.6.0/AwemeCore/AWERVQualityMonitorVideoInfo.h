@class NSString, AWERelatedVideoTagModel;

@interface AWERVQualityMonitorVideoInfo : NSObject

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *tagIds;
@property (copy, nonatomic) NSString *tagNames;
@property (nonatomic) double totalTime;
@property (retain, nonatomic) AWERelatedVideoTagModel *tagModel;

- (id)initWithAwemeModel:(id)a0;
- (id)initWithItemId:(id)a0 tagIds:(id)a1 tagNames:(id)a2 tagModel:(id)a3 totalTime:(double)a4;
- (void).cxx_destruct;

@end
