@class NSString;

@interface BUContentInfo : NSObject

@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) BOOL byteRangeAccessSupported;
@property (nonatomic) unsigned long long contentLength;
@property (readonly, nonatomic) BOOL isValid;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end
