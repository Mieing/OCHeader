@class NSString, NSNumber;
@protocol Optional;

@interface RTVVoipStickerOperationContent : JSONModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString<Optional> *effectID;
@property (copy, nonatomic) NSString<Optional> *resourceID;
@property (copy, nonatomic) NSString<Optional> *panel;
@property (retain, nonatomic) NSNumber<Optional> *reportOperationID;

+ (id)keyMapper;

- (id)initWithEffectID:(id)a0 resourceID:(id)a1 panel:(id)a2 type:(long long)a3;
- (void).cxx_destruct;

@end
