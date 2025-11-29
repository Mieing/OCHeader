@class NSDictionary, NSArray, NSString, BDPCDDynamicCardElementModel;

@interface BDPCDDynamicCardUIElementModel : NSObject

@property (retain, nonatomic) BDPCDDynamicCardElementModel *element;
@property (weak, nonatomic) BDPCDDynamicCardUIElementModel *parentNodeElementModel;
@property (copy, nonatomic) NSDictionary *contextDict;
@property (nonatomic) BOOL enableHeightCache;
@property (nonatomic) long long elementType;
@property (copy, nonatomic) NSArray *childrenArr;
@property (copy, nonatomic) NSDictionary *prosDict;
@property (copy, nonatomic) id /* block */ getLocalDynamicData;
@property (copy, nonatomic) id /* block */ getMergeData;
@property (nonatomic) double calculateHeight;
@property (nonatomic) double calculateWidth;
@property (copy, nonatomic) NSString *levelMaterialName;

+ (id)mainTypekey;

- (id)initWithElementModel:(id)a0;
- (long long)contentDictMainType;
- (id)initWithElementModel:(id)a0 contextDict:(id)a1;
- (BOOL)needSetToContextDict:(id)a0;
- (void).cxx_destruct;

@end
