@class NSString, WCFinderDataItem, NSNumber;

@interface WCFinderPersonalCenterParams : NSObject

@property (copy, nonatomic) NSString *refObjectid;
@property (nonatomic) int refCommentScene;
@property (retain, nonatomic) WCFinderDataItem *fromDataItem;
@property (nonatomic) BOOL hasRedDotAtEnter;
@property (nonatomic) BOOL openPostActionDirectly;
@property (nonatomic) unsigned long long fromScene;
@property (retain, nonatomic) NSNumber *prepareScene;

- (id)initWithOpenPostActionDirectly:(BOOL)a0 fromScene:(unsigned long long)a1;
- (id)initWithHasRedDotAtEnter:(BOOL)a0 openPostActionDirectly:(BOOL)a1 fromScene:(unsigned long long)a2 refObjectid:(id)a3 refCommentScene:(int)a4 fromDataItem:(id)a5;
- (void).cxx_destruct;

@end
