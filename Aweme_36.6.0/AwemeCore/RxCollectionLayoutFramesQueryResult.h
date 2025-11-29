@class RxCollectionLayoutSupplementaryItem, NSUUID, NSString, RxCollectionLayoutItem;

@interface RxCollectionLayoutFramesQueryResult : NSObject <RxCollectionLayoutFramesQueryResult> {
    long long _auxillaryKind;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    long long _index;
    RxCollectionLayoutItem *_item;
    long long _resultKind;
    NSUUID *_supplementaryEnrollmentIdentifier;
    long long _zIndex;
}

@property (readonly, nonatomic) RxCollectionLayoutItem *item;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long resultKind;
@property (readonly, nonatomic) long long zIndex;
@property (readonly, nonatomic) NSUUID *supplementaryEnrollmentIdentifier;
@property (readonly, nonatomic) RxCollectionLayoutSupplementaryItem *supplementaryItem;
@property (readonly, nonatomic) long long effectiveZIndex;
@property (readonly, nonatomic) BOOL isAuxillary;
@property (readonly, nonatomic) BOOL isAuxillaryKindGlobal;
@property (readonly, nonatomic) BOOL isAuxillaryKindGroup;
@property (readonly, nonatomic) BOOL isAuxillaryKindItem;
@property (readonly, nonatomic) BOOL isAuxillaryKindSection;
@property (readonly, nonatomic) BOOL isDecoration;
@property (readonly, nonatomic) BOOL isItem;
@property (readonly, nonatomic) BOOL isSupplementary;
@property (readonly, nonatomic) long long auxillaryKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)kindIndexKeyForKind:(id)a0 index:(long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1 zIndex:(long long)a2 resultKind:(long long)a3 item:(id)a4 auxillaryKind:(long long)a5 supplementaryEnrollmentIdentifier:(id)a6;
- (id)copyWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)copyWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1;
- (id)auxillaryItem;
- (id)copyWithOffset:(struct CGPoint { double x0; double x1; })a0 index:(long long)a1 supplementaryEnrollmentIdentifier:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1 zIndex:(long long)a2 resultKind:(long long)a3 item:(id)a4;
- (void).cxx_destruct;
- (id)kindIndexKey;
- (id)copyWithIndex:(long long)a0;

@end
