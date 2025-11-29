@class NSDictionary, NSString;
@protocol TMUIActionProtocol;

@interface TMUIActionObject : NSObject <TMUIActionProtocol>

@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<TMUIActionProtocol> lastUIAction;
@property (copy, nonatomic) NSString *viewControllerName;
@property (copy, nonatomic) NSString *viewControllerURL;
@property (copy, nonatomic) NSString *lastViewControllerName;
@property (copy, nonatomic) NSString *parentViewControllerName;
@property (copy, nonatomic) NSString *presentingViewControllerName;
@property (copy, nonatomic) NSString *presentedViewControllerName;
@property (nonatomic) double createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringFromActionType:(unsigned long long)a0;
+ (id)actionIdentifier:(id)a0 category:(unsigned long long)a1 type:(unsigned long long)a2 extraInfo:(id)a3 lastUIAction:(id)a4;
+ (id)actionFromAction:(id)a0;
+ (id)dictionaryFromUIAction:(id)a0;
+ (unsigned long long)categoryFromString:(id)a0;
+ (id)stringFromActionCategory:(unsigned long long)a0;

@end
