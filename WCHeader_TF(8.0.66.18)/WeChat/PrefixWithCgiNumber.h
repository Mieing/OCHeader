@class NSString;

@interface PrefixWithCgiNumber : NSObject

@property (retain, nonatomic) NSString *m_prefix;
@property (nonatomic) unsigned int m_cgiNumber;
@property (retain, nonatomic) NSString *m_cgiName;

+ (id)Prefix:(id)a0 Cgi:(unsigned int)a1 Name:(id)a2;

- (void).cxx_destruct;

@end
