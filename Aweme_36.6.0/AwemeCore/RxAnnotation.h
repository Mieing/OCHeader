@class NSString;

@interface RxAnnotation : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, nonatomic) long long line;
@property (readonly, nonatomic, getter=isAction) BOOL action;
@property (readonly, nonatomic) id value;

+ (long long)version;

- (id)initWithIdentifier:(id)a0 name:(id)a1 value:(id)a2 fileName:(id)a3 line:(long long)a4;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end
