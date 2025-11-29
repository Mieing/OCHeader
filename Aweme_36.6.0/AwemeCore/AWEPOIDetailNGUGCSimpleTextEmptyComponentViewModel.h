@class NSString;

@interface AWEPOIDetailNGUGCSimpleTextEmptyComponentViewModel : DitoComponentViewModel <AWEPOIDetailNGListCellFlagBitProtocol>

@property (nonatomic) BOOL hasRemoved;
@property (nonatomic) BOOL hasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentReuseIdentifier;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)initWithNode:(id)a0;

@end
