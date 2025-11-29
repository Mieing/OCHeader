@class NSArray, NSString, BDPUniqueID;

@interface BDPActionSheetPluginModel : BDPBasePluginModel

@property (retain, nonatomic) NSArray *itemList;
@property (copy, nonatomic) NSString *itemColor;
@property (copy, nonatomic) NSString *alertText;
@property (nonatomic) BOOL needCustomUI;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
