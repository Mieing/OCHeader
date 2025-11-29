@class NSString;

@interface HMDImageSection : HMDDyldImageModel

@property (nonatomic) unsigned long long base;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *sectionName;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
