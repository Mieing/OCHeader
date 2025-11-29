@class NSString, WCMediaItem;

@interface WCBGAuthor : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *quote;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) WCMediaItem *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgAuthorFromServerObject:(id)a0;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_quote;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_icon;
+ (void)initialize;

@end
