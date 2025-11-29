@class NSString;

@interface RightTopMenuItemBtnData : MMObject

@property (retain, nonatomic) NSString *m_nsID;
@property (retain, nonatomic) NSString *m_nsTitleID;
@property (retain, nonatomic) NSString *m_nsImageName;
@property (nonatomic) unsigned long long m_actionType;
@property (retain, nonatomic) NSString *m_nsActionName;
@property (retain, nonatomic) NSString *m_nsPluginUserName;

+ (id)genItemWithID:(id)a0 title:(id)a1 imageName:(id)a2 actionType:(unsigned long long)a3 actionName:(id)a4 pluginUserName:(id)a5;

- (id)init;
- (void).cxx_destruct;

@end
