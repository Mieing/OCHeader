@class NSString, NSMutableDictionary;

@interface HTSFormatEnterRoomBusiParams : NSObject <HTSFormatEnterRoomBusiParamsService>

@property (retain, nonatomic) NSMutableDictionary *enterRoomParams;
@property (retain, nonatomic) NSMutableDictionary *generalSearchParams;
@property (retain, nonatomic) NSMutableDictionary *imChatListParams;
@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getBusiParams;
- (void)updateEnterRoomParams:(id)a0;
- (id)getEnterRoomParams;
- (void)updateFormatGeneralSearchParams:(id)a0;
- (id)getFormatGeneralSearchParamForKey:(id)a0;
- (void)updateformatImChatListParams:(id)a0;
- (id)getFormatImChatListParamForKey:(id)a0;
- (void)updateFormatExtraParams:(id)a0;
- (id)getFormatExtraParamForKey:(id)a0;
- (void).cxx_destruct;

@end
