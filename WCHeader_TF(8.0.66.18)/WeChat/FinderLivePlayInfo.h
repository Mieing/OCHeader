@class NSString, NSNumber;

@interface FinderLivePlayInfo : NSObject

@property (copy, nonatomic) NSString *finder_export_id;
@property (copy, nonatomic) NSString *finder_object_id;
@property (retain, nonatomic) NSNumber *videoScrWidth;
@property (retain, nonatomic) NSNumber *videoScrHeight;
@property (retain, nonatomic) NSNumber *containerWidth;
@property (retain, nonatomic) NSNumber *containerHeight;
@property (retain, nonatomic) NSNumber *channelSource;

+ (id)makeWithFinder_export_id:(id)a0 finder_object_id:(id)a1 videoScrWidth:(id)a2 videoScrHeight:(id)a3 containerWidth:(id)a4 containerHeight:(id)a5 channelSource:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
