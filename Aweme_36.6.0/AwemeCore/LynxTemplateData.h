@class NSString, NSMutableArray;

@interface LynxTemplateData : NSObject {
    struct Value { struct lynx_value { union { BOOL val_bool; double val_double; int val_int32; unsigned int val_uint32; long long val_int64; unsigned long long val_uint64; struct lynx_value_ptr__ *val_ptr; } ; int type; int tag; } value_; struct lynx_api_env__ *env_; struct lynx_value_ref__ *value_ref_; } value_;
    struct Value { struct lynx_value { union { BOOL val_bool; double val_double; int val_int32; unsigned int val_uint32; long long val_int64; unsigned long long val_uint64; struct lynx_value_ptr__ *val_ptr; } ; int type; int tag; } value_; struct lynx_api_env__ *env_; struct lynx_value_ref__ *value_ref_; } value_for_js_;
    NSString *_processerName;
    BOOL _readOnly;
    NSMutableArray *_updateActions;
    BOOL _useBoolLiterals;
}

@property (readonly) NSString *processorName;

- (id)initWithDictionary:(id)a0 useBoolLiterals:(BOOL)a1;
- (id)deepClone;
- (void)updateWithTemplateData:(id)a0;
- (void)updateWithJson:(id)a0;
- (void)updateObject:(id)a0 forKey:(id)a1;
- (void)markState:(id)a0;
- (void)updateInteger:(long long)a0 forKey:(id)a1;
- (id)initWithJson:(id)a0 useBoolLiterals:(BOOL)a1;
- (id)copyUpdateActions;
- (void)addObjectToUpdateActions:(id)a0;
- (void)updateWithLepusValue:(const struct Value { struct lynx_value { union { BOOL x0; double x1; int x2; unsigned int x3; long long x4; unsigned long long x5; struct lynx_value_ptr__ *x6; } x0; int x1; int x2; } x0; struct lynx_api_env__ *x1; struct lynx_value_ref__ *x2; } *)a0;
- (id)obtainUpdateActions;
- (BOOL)checkIsLegalData;
- (void)setObject:(id)a0 withKey:(id)a1;
- (void)updateDouble:(double)a0 forKey:(id)a1;
- (struct Value { struct lynx_value { union { BOOL x0; double x1; int x2; unsigned int x3; long long x4; unsigned long long x5; struct lynx_value_ptr__ *x6; } x0; int x1; int x2; } x0; struct lynx_api_env__ *x1; struct lynx_value_ref__ *x2; })getDataForJSThread;
- (void)updateBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)isReadOnly;
- (void).cxx_destruct;
- (id)dictionary;
- (void)updateWithDictionary:(id)a0;
- (id)init;
- (void)markReadOnly;
- (id).cxx_construct;
- (id)initWithDictionary:(id)a0;
- (id)initWithJson:(id)a0;

@end
