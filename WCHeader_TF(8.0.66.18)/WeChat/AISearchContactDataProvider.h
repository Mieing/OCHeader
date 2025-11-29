@class CContact;

@interface AISearchContactDataProvider : NSObject

@property (retain, nonatomic) CContact *contact;

- (id)initWithFoundContact:(id)a0;
- (long long)numberOfSectionInSearchResult;
- (long long)numberOfRowInSearchResultSection:(long long)a0;
- (double)heightForRowInSearchResultAtIndexPath:(id)a0;
- (id)makeSearchResultCellInTableView:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;

@end
