@class NSString, NSMutableDictionary;

@interface NewArrivalCountData : NSObject <NSCoding> {
    NSString *m_nsFile;
    NSMutableDictionary *m_dicHistory;
}

+ (id)dataFromFile:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)afterLoadData:(id)a0;
- (BOOL)save;
- (id)getArrayItem;
- (id)getItem:(id)a0;
- (BOOL)setItem:(id)a0;
- (BOOL)updateItem:(id)a0 arrivalCount:(unsigned int)a1 msgid:(unsigned int)a2;
- (BOOL)removeItem:(id)a0;
- (void).cxx_destruct;

@end
