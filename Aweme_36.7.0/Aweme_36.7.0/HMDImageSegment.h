@class NSString, NSArray;

@interface HMDImageSegment : HMDDyldImageModel

@property (nonatomic) unsigned long long base;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *segmentName;
@property (copy, nonatomic) NSArray *sections;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
