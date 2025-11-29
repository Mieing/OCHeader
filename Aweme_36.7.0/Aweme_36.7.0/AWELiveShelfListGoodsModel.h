@class AWELifeShelfCardListItem, NSString;

@interface AWELiveShelfListGoodsModel : NSObject <AWEListDiffable>

@property (retain, nonatomic) AWELifeShelfCardListItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifierKey;
- (void).cxx_destruct;

@end
