@interface CKAMediaTypeModel : NSObject {
    void /* unknown type, empty encoding */ videoSubType;
    void /* unknown type, empty encoding */ photoSubType;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long subType;

- (id)initWithType:(long long)a0 subType:(unsigned long long)a1;
- (id)initWithType:(long long)a0;
- (id)init;

@end
