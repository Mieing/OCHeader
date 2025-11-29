@class NSNumber, NSString;

@interface AWEFormatRouterParamIMChatList : JSONModel

@property (retain, nonatomic) NSNumber *cellOrder;
@property (copy, nonatomic) NSString *noticeType;
@property (retain, nonatomic) NSNumber *showCnt;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
