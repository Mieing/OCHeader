@class NSArray, NSString;

@interface AWELivePreStreamLiveCardModel : NSObject <IGListDiffable>

@property (retain, nonatomic) NSArray *previewRoomsArray;
@property (retain, nonatomic) NSArray *unreadExtraArray;
@property (nonatomic) long long contentCategory;
@property (retain, nonatomic) NSString *similarAnchorID;
@property (copy, nonatomic) NSString *title;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
