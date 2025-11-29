@class NSString;

@interface MegaVideoFuncDeclareObjc : UnitRCObjcBaseClass <MegaVideoFuncDeclare>

@property (readonly, copy, nonatomic) id /* block */ Void_Bool_Block;
@property (readonly, copy, nonatomic) id /* block */ Void_ByteArray_Block;
@property (readonly, copy, nonatomic) id /* block */ Void_Int32_Block;
@property (readonly, copy, nonatomic) id /* block */ Void_Int32String_Block;
@property (readonly, copy, nonatomic) id /* block */ Void_List_MegaVideoFeed_2_Block;
@property (readonly, copy, nonatomic) id /* block */ Void_LongVideoFeedPrefetchResult_2_Block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)from_Void_Bool_Block:(id /* block */)a0;
+ (id /* block */)to_Void_Bool_Block:(id)a0;
+ (id)from_Void_ByteArray_Block:(id /* block */)a0;
+ (id /* block */)to_Void_ByteArray_Block:(id)a0;
+ (id)from_Void_Int32_Block:(id /* block */)a0;
+ (id /* block */)to_Void_Int32_Block:(id)a0;
+ (id)from_Void_Int32String_Block:(id /* block */)a0;
+ (id /* block */)to_Void_Int32String_Block:(id)a0;
+ (id)from_Void_List_MegaVideoFeed_2_Block:(id /* block */)a0;
+ (id /* block */)to_Void_List_MegaVideoFeed_2_Block:(id)a0;
+ (id)from_Void_LongVideoFeedPrefetchResult_2_Block:(id /* block */)a0;
+ (id /* block */)to_Void_LongVideoFeedPrefetchResult_2_Block:(id)a0;

- (void)Void_Bool:(BOOL)a0;
- (void)Void_ByteArray:(id)a0;
- (void)Void_Int32:(int)a0;
- (void)Void_Int32String:(int)a0 errMsg:(id)a1;
- (void)Void_List_MegaVideoFeed_2:(id)a0;
- (void)Void_LongVideoFeedPrefetchResult_2:(id)a0;
- (void).cxx_destruct;

@end
