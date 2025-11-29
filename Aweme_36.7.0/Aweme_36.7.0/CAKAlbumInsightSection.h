@class NSString, NSArray;

@interface CAKAlbumInsightSection : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)description;

@end
