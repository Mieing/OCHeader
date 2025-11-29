@class NSString;

@interface SectionInfo : MMObject

@property (nonatomic) long long start;
@property (nonatomic) long long size;
@property (retain, nonatomic) NSString *title;

+ (id)create:(unsigned long long)a0 size:(unsigned long long)a1;

- (void).cxx_destruct;

@end
