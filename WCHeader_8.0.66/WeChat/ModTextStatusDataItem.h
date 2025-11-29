@class NSString;

@interface ModTextStatusDataItem : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *textStateId;
@property (retain, nonatomic) NSString *textStateExtInfo;
@property (nonatomic) double friendScore;
@property (nonatomic) double contentScore;
@property (nonatomic) unsigned int sequence;
@property (retain, nonatomic) NSString *privateInfo;
@property (nonatomic) unsigned int privateVersion;
@property (retain, nonatomic) NSString *publicInfo;
@property (nonatomic) unsigned int publicVersion;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)description;
- (BOOL)isValid;
- (BOOL)isUpdatePacketInfo;
- (id)textState;
- (id)getTextStataInner;
- (void).cxx_destruct;

@end
