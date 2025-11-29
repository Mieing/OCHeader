@interface BDPStreamUtil : NSObject

+ (BOOL)pipe:(id)a0 to:(id)a1;
+ (id)fileForReading:(id)a0 error:(id *)a1;
+ (id)pipe:(id)a0 with:(id)a1;
+ (id)fileForWriting:(id)a0 error:(id *)a1;

@end
