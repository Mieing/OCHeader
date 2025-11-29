@class NSString, FavoritesItem, WNContentStorage, NSDate, RTESectionMgr, WNHtmlStringBuilder;

@interface WNSaverContext : MMObject

@property (retain, nonatomic) NSDate *modifyTime;
@property (retain, nonatomic) FavoritesItem *favItem;
@property (retain, nonatomic) NSString *remianHTML;
@property (nonatomic) BOOL inList;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) WNContentStorage *wnContent;
@property (retain, nonatomic) RTESectionMgr *sectionMgr;
@property (retain, nonatomic) WNHtmlStringBuilder *htmlBuilder;
@property (copy, nonatomic) id /* block */ saveHandler;
@property (copy, nonatomic) id /* block */ openHandler;

- (void).cxx_destruct;

@end
