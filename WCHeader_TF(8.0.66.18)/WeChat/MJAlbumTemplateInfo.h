@class NSString;

@interface MJAlbumTemplateInfo : NSObject <PBCoding, NSCopying>

@property (nonatomic) unsigned long long materialNumMin;
@property (nonatomic) unsigned long long materialNumMax;
@property (copy, nonatomic) NSString *materialNumSuggest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_materialNumMin;
+ (void)PBArrayAdd_materialNumMax;
+ (void)PBArrayAdd_materialNumSuggest;
+ (void)initialize;

@end
