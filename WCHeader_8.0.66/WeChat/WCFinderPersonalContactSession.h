@class NSArray, WCFinderPersonalContactModel, NSString, NSMutableArray;

@interface WCFinderPersonalContactSession : NSObject <WCFinderPersonalContactModelExt>

@property (retain, nonatomic) WCFinderPersonalContactModel *model;
@property (retain, nonatomic) NSMutableArray *mutItems;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithContactModel:(id)a0;

@end
