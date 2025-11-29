@class WCFinderCollectionHalfViewDisplayInfo, FinderCollectionInfo, FinderPaidCollectionInfo, NSString;

@interface WCFinderCollectionHalfViewParams : NSObject

@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollection;
@property (retain, nonatomic) WCFinderCollectionHalfViewDisplayInfo *displayInfo;
@property (retain, nonatomic) NSString *fromTid;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSString *dataScene;
@property (copy, nonatomic) id /* block */ clickAction;
@property (nonatomic) BOOL dismissSelfWhenJumpNewList;

+ (id)paramsWithCollectionInfo:(id)a0 commentScene:(int)a1 dataScene:(id)a2;
+ (id)paramsWithPaidCollection:(id)a0 commentScene:(int)a1 dataScene:(id)a2;
+ (id)paramsWithDisplayInfo:(id)a0 commentScene:(int)a1 dataScene:(id)a2;

- (void).cxx_destruct;

@end
