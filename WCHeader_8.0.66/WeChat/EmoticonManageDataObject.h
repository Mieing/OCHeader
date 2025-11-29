@class CEmoticonPackageWrap, CEmoticonIPSetInfo;

@interface EmoticonManageDataObject : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) CEmoticonPackageWrap *pageWrap;
@property (retain, nonatomic) CEmoticonIPSetInfo *setInfo;
@property (nonatomic) unsigned long long packedEmoticonCount;
@property (nonatomic) unsigned long long objPosition;

- (id)pageWrapForMoving;
- (id)keyForOrder;
- (void).cxx_destruct;

@end
