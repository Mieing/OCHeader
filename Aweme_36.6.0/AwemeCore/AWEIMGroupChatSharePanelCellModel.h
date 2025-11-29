@class NSString;

@interface AWEIMGroupChatSharePanelCellModel : NSObject

@property (readonly, nonatomic) NSString *cellIdentifier;
@property (readonly, nonatomic) id model;
@property (readonly, nonatomic) id context;

- (id)initWithIdentifier:(id)a0 model:(id)a1 context:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
