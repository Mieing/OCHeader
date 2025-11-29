@class NSString, NSData;

@interface FinderNextObjectInfo : WXPBGeneratedMessage <YYModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long nextObjectId;
@property (retain, nonatomic) NSData *nextObjectBuffer;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;


@end
