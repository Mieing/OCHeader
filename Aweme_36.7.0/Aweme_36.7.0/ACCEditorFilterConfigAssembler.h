@class NSString, NSNumber;

@interface ACCEditorFilterConfigAssembler : NSObject

@property (copy, nonatomic) NSString *filterID;
@property (copy, nonatomic) NSNumber *filterIntensity;

- (id)initWithFilterConfigDTO:(id)a0;
- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
