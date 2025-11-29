@class AWEFormatRouterParamSearch, AWEFormatRouterParamExtra, AWEFormatRouterParamIMChatList, AWEFormatRouterParamEnter;

@interface AWEFormatRouterParamParser : JSONModel

@property (retain, nonatomic) AWEFormatRouterParamExtra *formatExtra;
@property (retain, nonatomic) AWEFormatRouterParamEnter *formatEnter;
@property (retain, nonatomic) AWEFormatRouterParamSearch *formatGeneralSearch;
@property (retain, nonatomic) AWEFormatRouterParamIMChatList *formatImChatList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
