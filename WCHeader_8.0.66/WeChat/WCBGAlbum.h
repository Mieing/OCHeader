@class NSString, WCBGAuthor, NSMutableArray;

@interface WCBGAlbum : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) WCBGAuthor *author;
@property (retain, nonatomic) NSMutableArray *groupList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgAlbumFromServerObject:(id)a0;
+ (void)PBArrayAdd_author;
+ (void)PBArrayAdd_groupList;
+ (void)initialize;

@end
