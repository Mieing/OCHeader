@interface IESECTabKitTabAnchorModel : NSObject

@property (nonatomic) unsigned long long bottomIdx;
@property (nonatomic) unsigned long long topIdx;
@property (nonatomic) BOOL animated;

+ (id)anchorModelWithBottomIdx:(unsigned long long)a0 topIdx:(unsigned long long)a1 animated:(BOOL)a2;

@end
