@class NSString, NSMutableArray;

@interface MSETransmitImageData : MSETransmitData <PBCoding>

@property (retain, nonatomic) NSMutableArray *selectedImageUrls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_selectedImageUrls;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
